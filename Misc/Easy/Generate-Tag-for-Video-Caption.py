class Solution:
    def generateTag(self, caption: str) -> str:
        subStrings = caption.split()
        if len(subStrings) == 0:
            return "#"
        for i in range(len(subStrings)):
            subStrings[i] = subStrings[i].capitalize()
        subStrings[0] = subStrings[0].lower()
        result = "#" + "".join(subStrings)
        return result[:100]
