import unittest
from src import beauty

class TestBeautyFunction(unittest.TestCase):
    def test_case1(self):
        n, m = 5, 4
        s = "abaca"
        x = [1, 1, 3, 4]
        y = [2, 3, 4, 5]
        result = beauty(n, m, s, x, y)
        self.assertEqual(result, 3)

    def test_case3(self):
        n, m = 6, 6
        s = "xzyabc"
        x = [1,3,2,5,4,6]
        y = [2,1,3,4,3,4]
        result = beauty(n, m, s, x, y)
        self.assertEqual(result, -1)

if __name__ == '__main__':
    unittest.main()
