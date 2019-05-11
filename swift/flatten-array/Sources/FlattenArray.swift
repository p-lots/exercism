func flattenArray<T>(_ arr: [Any]) -> [T] {
    var ret = [T]()
    for item in arr {
        if let element = item as? T {
            ret.append(element)
        }
        else if let elementArray = item as? [Any] {
            ret.append(contentsOf: flattenArray(elementArray))
        }
    }
    return ret
}
