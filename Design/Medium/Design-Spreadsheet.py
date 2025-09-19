class Spreadsheet:

    def __init__(self, rows: int):
        self.spread_sheet = {chr(i):[0] * rows for i in range(ord('A'), ord('Z') + 1)} 

    def setCell(self, cell: str, value: int) -> None:
        column, idx = cell[0], int(cell[1:])
        if value >= 0 and value <= pow(10, 5):
            self.spread_sheet[column][idx - 1] = value

    def resetCell(self, cell: str) -> None:
        column, idx = cell[0], int(cell[1:])
        self.spread_sheet[column][idx - 1] = 0

    def getValue(self, formula: str) -> int:
        cells = formula[1:].split('+')
        if not cells[0] or not cells[1]:
            return 0
        
        def get_value(cell: str) -> int:
            if cell[0].isupper() and len(cell) > 1 and cell[1:].isdigit():
                col, idx = cell[0], int(cell[1:])
                return self.spread_sheet[col][idx - 1]
            else:
                return int(cell)
                
        return get_value(cells[0]) + get_value(cells[1])

# Your Spreadsheet object will be instantiated and called as such:
# obj = Spreadsheet(rows)
# obj.setCell(cell,value)
# obj.resetCell(cell)
# param_3 = obj.getValue(formula)
