class ParkingSystem:

    def __init__(self, big: int, medium: int, small: int):
        self.spots = {
            1: [0, big],
            2: [0, medium],
            3: [0, small]
        }

    def addCar(self, carType: int) -> bool:
        current, capacity = self.spots[carType]
        if current < capacity:
            self.spots[carType][0] += 1
            return True
        return False
