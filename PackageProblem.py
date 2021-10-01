import shutil
import os

id = 'Problem' + input('Your problem\'s name: ')
baseDir = './' + id

if os.path.exists(baseDir + ".zip"):
    os.remove(baseDir + ".zip")
os.mkdir(baseDir)
shutil.copytree('./Solver', baseDir + '/Solutions')
shutil.copytree('./Test', baseDir + '/Test')
shutil.copyfile('./Header/Setup.hpp', baseDir + '/Setup.hpp')
shutil.copyfile('./Resources/Template.docx', baseDir + '/' + id + '.docx')
shutil.copyfile('./Resources/NoteForAProblem.txt', baseDir + '/' + 'Note.txt')
shutil.make_archive(baseDir, 'zip', baseDir)
shutil.rmtree(baseDir)