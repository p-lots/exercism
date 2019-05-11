import Foundation

struct Bob {
    static func hey(_ input: String) -> String {
        if (input.trimmingCharacters(in: .whitespaces).isEmpty) { return "Fine. Be that way!" }
        if (input.uppercased() == input && input.rangeOfCharacter(from: .letters) != nil) { return "Whoa, chill out!" }
        if (input.last == "?") { return "Sure." }
        return "Whatever."
    }
}
