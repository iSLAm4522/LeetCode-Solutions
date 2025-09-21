class MyHashSet:
    def __init__(self):
        self.hash_table = [False] * 1000001

    def add(self, key: int) -> None:
        self.hash_table[key] = True

    def remove(self, key: int) -> None:
        self.hash_table[key] = False

    def contains(self, key: int) -> bool:
        return self.hash_table[key]
