class BinarySearch {
    let list: [Int]
    let middle: Int
    init(_ givenList: [Int]) throws {
        guard givenList == givenList.sorted() else { throw BinarySearchError.unsorted }
        self.list = givenList
        self.middle = self.list.count / 2
    }
    func searchFor(_ toFind: Int) -> Int? {
        var leftSide = 0, rightSide = self.list.count - 1
        while leftSide <= rightSide {
            let middle = (leftSide + rightSide) / 2
            let middleValue = self.list[middle]
            if middleValue < toFind {
                leftSide = middle + 1
            }
            else if middleValue > toFind {
                rightSide = middle - 1
            }
            else {
                return middle
            }
        }
        return nil
    }
}

enum BinarySearchError: Error {
    case unsorted
}
