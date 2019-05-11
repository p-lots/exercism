import Foundation

class SimulatedRobot {
    enum Orientation {
        case north, south, east, west, errorOrientation
    }
    enum Instruction {
        case turnLeft, advance, turnRight, errorInstruction
    }
    var bearing: Orientation
    var coordinates: [Int]
    private let instructionLookupTable: [String: Instruction] = ["L": .turnLeft, "A": .advance, "R": .turnRight]
    init() {
        self.bearing = .north
        self.coordinates = [0, 0]
    }
    func orient(_ orientation: Orientation) {
        self.bearing = orientation
    }
    func turnRight() {
        let dirs: [Orientation] = [.north, .east, .south, .west]
        executeTurn(orientations: dirs)
    }
    func turnLeft() {
        let dirs: [Orientation] = [.north, .west, .south, .east]
        executeTurn(orientations: dirs)
    }
    func executeTurn(orientations: [Orientation]) {
        if let currentOrientationIndex = orientations.index(of: self.bearing) {
            let nextOrientationIndex = (currentOrientationIndex + 1) % orientations.count
            self.bearing = orientations[nextOrientationIndex]
        }
        else {
            self.bearing = .errorOrientation
        }
    }
    func at(x: Int, y: Int) {
        self.coordinates = [x, y]
    }
    func advance() {
        switch self.bearing {
        case .north:
            coordinates[1] += 1
        case .south:
            coordinates[1] -= 1
        case .west:
            coordinates[0] -= 1
        case .east:
            coordinates[0] += 1
        default: return
        }
    }
    func instructions(_ insts: String) -> [Instruction] {
        return insts.flatMap { String($0) }.map { instructionLookupTable[$0] ?? .errorInstruction }
    }
    func place(x: Int, y: Int, direction: Orientation) {
        self.orient(direction)
        self.at(x: x, y: y)
    }
    func evaluate(_ directions: String) {
        let _ = self.instructions(directions).forEach { inst in
            switch inst {
            case .turnLeft:
                self.turnLeft()
            case .advance:
                self.advance()
            case .turnRight:
                self.turnRight()
            default: return
            }
        }
    }
}
