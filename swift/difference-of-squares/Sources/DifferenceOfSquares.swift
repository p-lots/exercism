class Squares {
    var number: Int
    var squareOfSums: Int {
        let sumToN = number * (number + 1) / 2
        return sumToN * sumToN
    }
    var sumOfSquares: Int {
        return number * (number + 1) * (2 * number + 1) / 6
    }
    var differenceOfSquares: Int {
        return squareOfSums - sumOfSquares
    }
    init(_ n: Int) {
        number = n
    }
}
