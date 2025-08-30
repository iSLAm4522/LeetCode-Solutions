class MyHashMap:

    def __init__(self):
        self._dict = {}

    def put(self, key: int, value: int) -> None:
        self._dict[key] = value

    def get(self, key: int) -> int:
        if key in self._dict:
            return self._dict[key]
        return -1

    def remove(self, key: int) -> None:
        if key in self._dict:
            del self._dict[key]

# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key,value)
# param_2 = obj.get(key)
# obj.remove(key)
