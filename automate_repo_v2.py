import github
from github import Github
import os
from time import sleep

TOKEN = "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" # Его можно получить здесь https://github.com/settings/tokens
g = Github(TOKEN)
g_auth_user = g.get_user()
os.chdir("./")

data = {}
gist_files = {}

# Main functions
def getData():
    """Saves different data, for example:
    heading, description in the data dictionary"""
    # Heading
    heading = os.getcwd()
    heading = os.path.basename(heading)
    data.update({"Heading": heading})

    # Main description
    main_description = ""
    if "Homework" in heading:
        main_description = "Д/з: " + input("Введите описание: ")
    elif "Practice" in heading:
        main_description = "Практика: " + input("Введите описание: ")
    data.update({"Main description": main_description})

    # Projects description
    for folder in os.listdir():
        if os.path.isdir(folder) and "_" in folder:
            project_description = input(f"Введите описание для {folder}: ")
            data.update({f"{folder}": project_description})

def makeBeautifulText(string):
    """Makes text beautiful, for example:
    Float_To_Str ---> Float to str"""
    string = string.capitalize()
    string = string.replace("_", " ")
    return string

def getGistLink():
    """Creates and returns full gist link"""
    gist_link = g_auth_user.get_gists()
    gist_full_link = "https://gist.github.com/SlavikArt/" + str(gist_link[0])[9:-2]
    return gist_full_link

def createMainREADME():
    """Creates main README.md file"""
    README_MAIN = open("README.md", "w", encoding="utf-8")
    g_link = getGistLink()
    README_MAIN.write(f'''
# {data["Heading"]}
{data["Main description"]}

<a href="{g_link}">Gist - страница со всеми кодами проектов</a>

''')

    for folder in os.listdir():
        if os.path.isdir(folder) and "_" in folder:
            README_MAIN.write(f"* [{folder}]({folder})\n")

    README_MAIN.write('\n<p align="center">\n')

    for folder in os.listdir():
        if os.path.isdir(folder) and "_" in folder:
            README_MAIN.write(f"    <h2>{makeBeautifulText(folder)}</h2>\n")
            README_MAIN.write(f"    <p>{data[folder]}</p>\n")
            README_MAIN.write(f'    <img src="images/{folder}.png">\n')

    README_MAIN.write('</p>')

def createProjectsREADME_AndGist():
    """Creates README.md files for all projects,
    and Gist with all project codes"""
    for folder in os.listdir():
        if os.path.isdir(folder) and "_" in folder:
            README_PROJECT = open(f"{folder}/README.md", "w", encoding="utf-8")
            README_PROJECT.write(f'# {makeBeautifulText(folder)}\n'
                                 f'* [{folder}.cpp]({folder}.cpp)\n'
                                 f'<p>{data.get(folder)}</p>\n'
                                 f'<img src="/images/{folder}.png">\n')
            cpp_file = open(f"{folder}/{folder}.cpp", "r", encoding="utf-8")
            gist_files.update({f"{folder}.cpp": github.InputFileContent(str(cpp_file.read()))})
    g_auth_user.create_gist(public=False, files=gist_files, description=f'Gist for https://github.com/SlavikArt/{data.get("Heading")}')

# Start of script
print("Приветствую в программе для автоматического оформления вашего проекта!")
getData()
createProjectsREADME_AndGist()
sleep(3)
createMainREADME()