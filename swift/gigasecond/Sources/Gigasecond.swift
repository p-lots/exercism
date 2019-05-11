import Foundation

class Gigasecond {
    var description: String
    init?(from: String) {
        let dateFormatter = DateFormatter()
        dateFormatter.dateFormat = "yyyy-MM-dd'T'HH:mm:ss"
        dateFormatter.timeZone = TimeZone(secondsFromGMT: 0)
        if let fromDate = dateFormatter.date(from: from) {
            let calculatedDate = Date(timeInterval: 1e9, since: fromDate)
            description = dateFormatter.string(from: calculatedDate)
        }
        else {
            return nil
        }
    }
}
