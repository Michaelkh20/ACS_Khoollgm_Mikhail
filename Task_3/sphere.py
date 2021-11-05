import math
import random

from shape import Shape


# Класс, описывающий сферу.
class Sphere(Shape):
    def __init__(self):
        self.radius = 0
        self.density = 0.0

    def In(self, inputStr):
        self.radius = int(inputStr[1])
        self.density = float(inputStr[2])

    def InRandom(self):
        self.radius = random.randint(1, 40)
        self.density = random.uniform(0.1, 4)
        pass

    def Out(self, ostream):
        ostream.write(
            "Sphere: Radius = {}, density = {}, Volume = {}\n".format(round(self.radius, 2), round(self.density, 2),
                                                                      round(self.Volume(), 2)))
        pass

    def Volume(self):
        return 4.0 * math.pi * self.radius * self.radius * self.radius / 3.0
