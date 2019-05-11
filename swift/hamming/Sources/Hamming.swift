class Hamming {
    static func compute(_ base: String, against: String) -> Int? {
        guard base.count == against.count else { return nil }
        var differenceCount: Int = 0
        for i in 0..<base.count {
            let baseIndex = base.index(base.startIndex, offsetBy: i)
            let againstIndex = against.index(against.startIndex, offsetBy: i)
            if (base[baseIndex] != against[againstIndex]) {
                differenceCount += 1
            }
        }
        return differenceCount
    }
}
