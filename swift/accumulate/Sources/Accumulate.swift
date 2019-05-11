extension Array {
    func accumulate<T>(_ f: (Element) -> T) -> Array<T> {
        var ret = [T]()
        for item in self {
            ret.append(f(item))
        }
        return ret
    }
}

