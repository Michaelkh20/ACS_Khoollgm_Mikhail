import math
import random

from shape import Shape


# Класс, описывающий тераэдр.
class Tetrahedron(Shape):
    def __init__(self):
        self.edge = 0
        self.density = 0.0

    def In(self, inputStr):
        self.edge = int(inputStr[1])
        self.density = float(inputStr[2])

    def InRandom(self):
        self.edge = random.randint(1, 40)
        self.density = random.uniform(0.1, 4)
        pass

    def Out(self, ostream):
        ostream.write(
            "Tetrahedron: Edge = {}, density = {}, Volume = {}\n".format(round(self.edge, 2), round(self.density, 2),
                                                                         round(self.Volume(), 2)))
        pass

    def Volume(self):
        return math.sqrt(2) * self.edge * self.edge * self.edge / 12
