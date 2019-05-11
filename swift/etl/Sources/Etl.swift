struct ETL {
    static func transform(_ oldDict: [Int: [String]]) -> [String: Int] {
        var ret = [String: Int]()
        for (key, value) in oldDict {
            for letter in value {
                ret[letter.lowercased()] = key
            }
        }
        return ret
    }
}
