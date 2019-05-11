class GradeSchool {
    var roster: [Int: [String]]
    init() {
        roster = [Int: [String]]()
    }
    func addStudent(_ name: String, grade: Int) {
        if let oldArray = roster[grade] {
            var newArray = oldArray
            newArray.append(name)
            roster.updateValue(newArray, forKey: grade)
        }
        else {
            roster.updateValue([name], forKey: grade)
        }
    }
    func studentsInGrade(_ grade: Int) -> [String] {
        if let ret = roster[grade] {
            return ret
        }
        else {
            return [String]()
        }
    }
    var sortedRoster: [Int: [String]] {
        var newRoster = [Int: [String]]()
        for grade in roster.keys.sorted() {
            newRoster[grade] = [String]()
        }
        for (grade, names) in roster {
            let namesSorted = names.sorted()
            newRoster.updateValue(namesSorted, forKey: grade)
        }
        return newRoster
    }
}
