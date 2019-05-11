import Foundation

class SpaceAge {
    var seconds: Int
    private let secondsPerEarthYear = 31557600
    private let earthYearsPerMarsYears: Double = 1.8808158
    private let earthYearsPerMercuryYears: Double = 0.2408467
    private let earthYearsPerVenusYears: Double = 0.61519726
    private let earthYearsPerJupiterYears: Double = 11.862615
    private let earthYearsPerSaturnYears: Double = 29.447498
    private let earthYearsPerUranusYears: Double = 84.016846
    private let earthYearsPerNeptuneYears: Double = 164.79132
    var onEarth: Double {
        let rawValue = Double(self.seconds) / Double(secondsPerEarthYear)
        return Double(String(format: "%.2f", rawValue))!
    }
    var onMercury: Double {
        let rawValue = self.onEarth / earthYearsPerMercuryYears
        return Double(String(format: "%.2f", rawValue))!
    }
    var onVenus: Double {
        let rawValue = self.onEarth / earthYearsPerVenusYears
        return Double(String(format: "%.2f", rawValue))!
    }
    var onMars: Double {
        let rawValue = self.onEarth / earthYearsPerMarsYears
        return Double(String(format: "%.2f", rawValue))!
    }
    var onJupiter: Double {
        let rawValue = self.onEarth / earthYearsPerJupiterYears
        return Double(String(format: "%.2f", rawValue))!
    }
    var onSaturn: Double {
        let rawValue = self.onEarth / earthYearsPerSaturnYears
        return Double(String(format: "%.2f", rawValue))!
    }
    var onUranus: Double {
        let rawValue = self.onEarth / earthYearsPerUranusYears
        return Double(String(format: "%.2f", rawValue))!
    }
    var onNeptune: Double {
        let rawValue = self.onEarth / earthYearsPerNeptuneYears
        return Double(String(format: "%.2f", rawValue))!
    }
    init(_ sec: Int) {
        self.seconds = sec
    }
}
