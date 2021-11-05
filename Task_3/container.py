from Statics import *


# Класс, описывающий контейнер.
class Container:
    def __init__(self):
        self.store = []

    def In(self, inputStrs):
        for inputStr in inputStrs:
            self.store.append(StaticIn(inputStr.split(" ")))
        pass

    def InRandom(self, size):
        for i in range(0, size):
            self.store.append(StaticInRandom())
        pass

    def Out(self, ostream):
        ostream.write("Container is store {} shapes:\n".format(len(self.store)))
        for shape in self.store:
            shape.Out(ostream)
        pass

    def DeleteShapesLargerThanAverage(self):
        summa = 0.0
        for shape in self.store:
            summa += shape.Volume()

        average_volume = summa / len(self.store)

        for shape in self.store:
            if shape.Volume() > average_volume:
                self.store.remove(shape)
        pass
