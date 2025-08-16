class Solution:
    def maximum69Number (self, num: int) -> int:
        num_str = str(num)
        index = num_str.find('6')
        if index != -1:
            num_str = num_str[:index] + '9' + num_str[index+1:]
        return int(num_str)
