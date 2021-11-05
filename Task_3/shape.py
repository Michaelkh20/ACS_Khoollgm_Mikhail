import random
from abc import ABC, abstractmethod


# Абстрактный класс-родитель для остальных фигур.
class Shape(ABC):

    @abstractmethod
    def In(self, inputStr):
        pass

    @abstractmethod
    def InRandom(self):
        pass

    @abstractmethod
    def Out(self, ostream):
        pass

    @abstractmethod
    def Volume(self):
        pass
