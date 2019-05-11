import Foundation

class Sieve {
    let primes: [Int]
    init(_ limit: Int) {
        var list = [Bool](repeating: true, count: limit)
        list[0] = false
        list[1] = false
        for n in 2..<limit {
            if list[n] {
                var i = n * n
                while i < limit {
                    list[i] = false
                    i += n
                }
            }
        }
        var primesList = [Int]()
        for n in 2..<limit {
            if list[n] {
                primesList.append(n)
            }
        }
        self.primes = primesList
    }
}
