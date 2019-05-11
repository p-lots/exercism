struct ListOps {
    static func append<T>(_ base: [T], _ toAppend: [T]...) -> [T] {
        var ret = base
        for arr in toAppend {
            for item in arr {
                ret.insert(item, at: ret.count)
            }
        }
        return ret
    }
    static func concat<T>(_ arrs: [T]...) -> [T] {
        var ret = [T]()
        for arr in arrs {
            for item in arr {
                ret.insert(item, at: ret.count)
            }
        }
        return ret
    }
    static func filter<T>(_ arr: [T], _ filterFunc: (T) -> Bool) -> [T] {
        var ret = [T]()
        for item in arr {
            if (filterFunc(item)) { ret.insert(item, at: ret.count) }
        }
        return ret
    }
    static func length<T>(_ arr: [T]) -> Int {
        return arr.count
    }
    static func map<T>(_ arr: [T], _ mapFunc: (T) -> T) -> [T] {
        var ret = [T]()
        for item in arr {
            ret.insert(mapFunc(item), at: ret.count)
        }
        return ret
    }
    static func foldLeft<T>(_ arr: [T], accumulated: T, combine: (T, T) -> T) -> T {
        var ret = accumulated
        for item in arr {
            ret = combine(ret, item)
        }
        return ret
    }
    static func foldRight<T>(_ arr: [T], accumulated: T, combine: (T, T) -> T) -> T {
        var ret = accumulated
        for index in 0..<arr.count {
            ret = combine(arr[arr.count - index - 1], ret)
        }
        return ret
    }
    static func reverse<T>(_ arr: [T]) -> [T] {
        var ret = [T]()
        for index in 0..<arr.count {
            ret.insert(arr[arr.count - index - 1], at: ret.count)
        }
        return ret
    }
}
