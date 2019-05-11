class Garden {
    enum Plant {
        case clover
        case grass
        case radishes
        case violets
    }
    let children: [String]
    let garden: String
    let plantsLookupTable: [String: Plant] = [ "C": .clover, "G": .grass, "R": .radishes, "V": .violets]
    init(_ garden: String, children: [String] = [
        "Alice", "Bob", "Charlie", "David",
        "Eve", "Fred", "Ginny", "Harriet",
        "Ileana", "Joseph", "Kincaid", "Larry"]) {
        self.children = children.sorted()
        self.garden = garden
    }
    func plantsForChild(_ child: String) -> [Plant] {
        let gardenSeparated = garden.filter { $0 != "\n" }.map { String($0) }
        let gardenSeparatedHalfwayPoint = gardenSeparated.count / 2
        let gardenZipped = Array(zip(gardenSeparated[0..<gardenSeparatedHalfwayPoint], gardenSeparated[gardenSeparatedHalfwayPoint..<gardenSeparated.count]))
        let childIndex: Int = children.index(of: child)!
        let returnValue: [Plant] = [ gardenZipped[childIndex * 2].0, gardenZipped[childIndex * 2 + 1].0, gardenZipped[childIndex * 2].1, gardenZipped[childIndex * 2 + 1].1 ].map { plantsLookupTable[$0]! }
        return returnValue
    }
}
