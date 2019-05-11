extension Array {
    func keep(_ keepFunc: (Element) -> Bool) -> [Element] {
        var ret = [Element]()
        for item in self {
            if keepFunc(item) {
                ret.append(item)
            }
        }
        return ret
    }
    func discard(_ discardFunc: (Element) -> Bool) -> [Element] {
        var ret = [Element]()
        for item in self {
            if !discardFunc(item) {
                ret.append(item)
            }
        }
        return ret
    }
}
