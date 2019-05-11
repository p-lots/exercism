import Foundation

struct Grains {
    static var total: UInt64 = {
        return (1...64).map { UInt64(pow(2, Double($0 - 1))) }.reduce(UInt64(0)) { $0 + $1 }
    }()
    static func square(_ input: Int) throws -> UInt64 {
        let errorString = "Input[\(input)] invalid. Input should be between 1 and 64 (inclusive)"
        if (input < 1) {
            throw GrainsError.inputTooLow(errorString)
        }
        else if (input > 64) {
            throw GrainsError.inputTooHigh(errorString)
        }
        return UInt64(pow(2, Double(input - 1)))
    }
    enum GrainsError : Error {
        case inputTooHigh(String)
        case inputTooLow(String)
    }
}
