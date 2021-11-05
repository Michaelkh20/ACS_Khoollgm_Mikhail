import random

from shape import Shape


# Класс, описывающий параллелепипед.
class Parallelepiped(Shape):

    def __init__(self):
        self.a = 0
        self.b = 0
        self.c = 0
        self.density = 0.0

    def In(self, inputStr):
        self.a = int(inputStr[1])
        self.b = int(inputStr[2])
        self.c = int(inputStr[3])
        self.density = float(inputStr[4])

    def InRandom(self):
        self.a = random.randint(1, 40)
        self.b = random.randint(1, 40)
        self.c = random.randint(1, 40)
        self.density = random.uniform(0.1, 4)
        pass

    def Out(self, ostream):
        ostream.write(
            "Parallelepiped: a = {}, b = {}, c = {}, density = {}, Volume = {}\n".format(round(self.a, 2),
                                                                                         round(self.b, 2),
                                                                                         round(self.c, 2),
                                                                                         round(self.density, 2),
                                                                                         round(self.Volume(), 2)))
        pass

    def Volume(self):
        return float(self.a * self.b * self.c)
