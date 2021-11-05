import random

from parallelepiped import Parallelepiped
from sphere import Sphere
from tetrahedron import Tetrahedron


# Статический метод ввода фигур.
def StaticIn(inputStr):
    key = int(inputStr[0])
    shape = None

    if key == 1:
        shape = Sphere()
    elif key == 2:
        shape = Parallelepiped()
    elif key == 3:
        shape = Tetrahedron()
    shape.In(inputStr)
    return shape


# Статический метод случайной генерации фигур.
def StaticInRandom():
    identifier = random.randint(1, 3)
    shape = None
    if identifier == 1:
        shape = Sphere()
    elif identifier == 2:
        shape = Parallelepiped()
    elif identifier == 3:
        shape = Tetrahedron()

    shape.InRandom()
    return shape
