class Nucleotide {
    static let lookupTable: [Character: Character] = [
        "G": "C",
        "C": "G",
        "T": "A",
        "A": "U"
    ]
    private var internalSequence: String
    init(_ givenSequence: String) {
        internalSequence = givenSequence
    }
    func complementOfDNA() throws -> String {
        let resultSequence = try internalSequence.map({ (input: Character) -> Character in
            guard let complement = Nucleotide.lookupTable[input] else {
                throw TranscriptionError.invalidNucleotide
            }
            return complement
        })
        return String(resultSequence)
    }
}

enum TranscriptionError: Error {
    case invalidNucleotide
}
