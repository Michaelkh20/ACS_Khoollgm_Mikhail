import sys
import time

from container import Container

# Ввод аргументов командной строки.
if len(sys.argv) != 5:
    print("Incorrect command line! You must write:\n"
          "     main -f infile outfile01 outfile02\n"
          "  Or:\n"
          "     main -n number outfile01 outfile02\n")
    exit(1)

print("Start")
startTime = time.time()
container = Container()

# Получение из файла.
if sys.argv[1] == "-f":
    print("From file: " + sys.argv[2] + '\n')

    ifile = open(sys.argv[2])
    InStr = ifile.read()
    ifile.close()

    container.In(InStr.split('\n'))

# Случайная генерация.
elif sys.argv[1] == "-n":
    print("RandomInt input\n")

    number = int(sys.argv[2])

    if (number < 1) or (number > 10000):
        print("Incorrect number of figures = " + str(number) + ". Set 0 < number <= 10000\n")
        exit(3)

    container.InRandom(number)
else:
    print("Incorrect command line! You must write:\n"
          "     main -f infile outfile01 outfile02\n"
          "  Or:\n"
          "     main -n number outfile01 outfile02\n")
    exit(2)

# Запись содержимого контейнера.
ofile = open(sys.argv[3], 'w')
ofile.write("Filled Container:\n")
container.Out(ofile)
ofile.close()

# Применение специальной функции.
container.DeleteShapesLargerThanAverage()

# Запись содержимого контейнера после применеия функции.
ofile = open(sys.argv[4], 'w')
ofile.write("Shapes larger then average volume have been removed from Container\n")
ofile.write("Filled Container:\n")
print("Shapes larger then average volume have been removed from Container")
container.Out(ofile)
ofile.close()

endTime = time.time()

print("Time spent: " + str(round(endTime - startTime, 6)) + " sec.")

print("Finish")
