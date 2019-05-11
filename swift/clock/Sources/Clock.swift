import Foundation

extension String {
    init(describing: Clock) {
        self = describing.description
    }
}

class Clock: Equatable {
    var description: String
    var hours: Int
    var minutes: Int
    init(hours: Int = 0, minutes: Int = 0) {
        let fixedTime = hours * 60 + minutes
        var fixedHours: Int = fixedTime / 60 % 24
        var fixedMinutes: Int = fixedTime % 60
        if fixedMinutes < 0 {
            fixedMinutes += 60
            fixedHours -= 1
        }
        if fixedHours < 0 {
            fixedHours += 24
        }
        self.hours = fixedHours
        self.minutes = fixedMinutes
        self.description = String(format: "%02d:%02d", self.hours, self.minutes)
    }
    func add(minutes: Int) -> Clock {
        let currentTimeInMinutes = self.hours * 60 + self.minutes + minutes
        var fixedHours = currentTimeInMinutes / 60 % 24
        var fixedMinutes = currentTimeInMinutes % 60
        if fixedMinutes < 0 {
            fixedMinutes += 60
            fixedHours -= 1
        }
        if fixedHours < 0 {
            fixedHours += 24
        }
        return Clock(hours: fixedHours, minutes: fixedMinutes)
    }
    func subtract(minutes: Int) -> Clock {
        let currentTimeInMinutes = self.hours * 60 + self.minutes - minutes
        var fixedHours = currentTimeInMinutes / 60 % 24
        var fixedMinutes = currentTimeInMinutes % 60
        if fixedMinutes < 0 {
            fixedMinutes += 60
            fixedHours -= 1
        }
        if fixedHours < 0 {
            fixedHours += 24
        }
        return Clock(hours: fixedHours, minutes: fixedMinutes)
    }
    static func == (_ lhs: Clock, _ rhs: Clock) -> Bool {
        return lhs.hours == rhs.hours && lhs.minutes == rhs.minutes
    }
}
