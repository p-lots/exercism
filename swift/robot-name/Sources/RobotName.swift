import Foundation

class Robot {
    var name: String = ""
    static var namesSet: Set<String> = []
    static func generateRandomName() -> String {
        var ret = String()
        let charPool = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        repeat {
            for _ in 1...2 {
                let randomNumber = Int(arc4random_uniform(UInt32(charPool.count)))
                let randomIndex = charPool.index(charPool.startIndex, offsetBy: randomNumber)
                ret.append(charPool[randomIndex])
            }
            for _ in 1...3 {
                let randomNumber = arc4random_uniform(10)
                ret += String(randomNumber)
            }
        } while namesSet.contains(ret)
        namesSet.insert(ret)
        return ret
    }
    init() {
        name = Robot.generateRandomName()
    }
    func resetName() {
        name = Robot.generateRandomName()
    }
}
