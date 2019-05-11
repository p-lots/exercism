import Foundation

class Queens {
    enum InitError: Error {
        case incorrectNumberOfCoordinates
        case invalidCoordinates
        case sameSpace
    }
    let white: [Int]
    let black: [Int]
    let description: String
    let canAttack: Bool
    init(white: [Int] = [0, 3], black: [Int] = [7, 3]) throws {
        guard white.count == 2 && black.count == 2 else { throw InitError.incorrectNumberOfCoordinates }
        guard white != black else { throw InitError.sameSpace}
        for coord in white {
            guard coord >= 0 && coord <= 7 else { throw InitError.invalidCoordinates }
        }
        for coord in black {
            guard coord >= 0 && coord <= 7 else { throw InitError.invalidCoordinates }
        }
        self.white = white
        self.black = black
        var board: [[Int]] = [
            [0, 0, 0, 0, 0, 0, 0, 0],
            [0, 0, 0, 0, 0, 0, 0, 0],
            [0, 0, 0, 0, 0, 0, 0, 0],
            [0, 0, 0, 0, 0, 0, 0, 0],
            [0, 0, 0, 0, 0, 0, 0, 0],
            [0, 0, 0, 0, 0, 0, 0, 0],
            [0, 0, 0, 0, 0, 0, 0, 0],
            [0, 0, 0, 0, 0, 0, 0, 0]
        ]
        board[white[0]][white[1]] = 1
        board[black[0]][black[1]] = 2
        self.description = board.map { $0.map { val in
            if val == 1 { return "W" }
            else if val == 2 { return "B" }
            return "_"
            }.joined(separator: " ") }.joined(separator: "\n")
        self.canAttack = (white[0] == black[0]) || (white[1] == black[1]) || (abs(white[0] - black[0]) == abs(white[1] - black[1]))
    }
}
