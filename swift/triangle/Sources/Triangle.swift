class Triangle {
    var a: Double
    var b: Double
    var c: Double
    init(_ sideA: Double, _ sideB: Double, _ sideC: Double) {
        a = sideA
        b = sideB
        c = sideC
    }
    var kind: String {
        if a <= 0 || b <= 0 || c <= 0 || a + b < c || b + c < a || a + c < b  {
            return "ErrorKind"
        }
        else if a == b && b == c {
            return "Equilateral"
        }
        else if a == b || b == c || a == c {
            return "Isosceles"
        }
        return "Scalene"
    }
}
