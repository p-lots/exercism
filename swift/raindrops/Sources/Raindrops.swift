struct Raindrops {
    private var number: Int
    init(_ n: Int) {
        number = n
    }
    var sounds: String {
        var ret: String = ""
        if (number % 3 == 0) {
            ret += "Pling"
        }
        if (number % 5 == 0) {
            ret += "Plang"
        }
        if (number % 7 == 0) {
            ret += "Plong"
        }
        if (ret.isEmpty) {
            return String(number)
        }
        return ret
    }
}
