class DNA {
    private var internalStrand: String
    init?(strand: String) {
        for ch in strand {
            if (ch != "A" && ch != "C" && ch != "T" && ch != "G") { return nil }
        }
        internalStrand = strand
    }
    func count(_ toCount: String) -> Int {
        guard !internalStrand.isEmpty else { return 0 }
        return internalStrand.filter { $0 == Character(toCount) }.count
    }
    func counts() -> [String: Int] {
        return ["T": self.count("T"), "A": self.count("A"), "C": self.count("C"), "G": self.count("G")]
    }
}
