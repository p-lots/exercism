class SumOfMultiples {
    static func toLimit(_ max: Int, inMultiples: [Int]) -> Int {
        let result = (0..<max).filter { n in
            var shouldFilter = false
            for mult in inMultiples {
                if (mult == 0) { continue }
                shouldFilter = shouldFilter || n % mult == 0
            }
            return shouldFilter
        }
        return result.reduce(0, +)
    }
}
