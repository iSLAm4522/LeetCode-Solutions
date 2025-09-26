class Solution:
    def capitalizeTitle(self, title: str) -> str:
        strings = title.split(' ')
        for i in range(len(strings)):
            if len(strings[i]) > 2:
                strings[i] = strings[i].capitalize()
            else:
                strings[i] = strings[i].lower()
        return ' '.join(strings)
