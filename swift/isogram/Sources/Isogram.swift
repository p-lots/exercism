struct Isogram {
    static func isIsogram(_ word: String) -> Bool {
        var letterSet: Set<String> = []
        for char in word {
            let charLower = String(char).lowercased()
            if (charLower == "-" || charLower == " ") { continue }
            else if (letterSet.contains(charLower)) { return false }
            else { letterSet.insert(charLower) }
        }
        return true
    }
}
