class NumberClassifier {
    enum NumberCategory {
        case perfect
        case deficient
        case abundant
    }
    let classification: NumberCategory
    init(number: Int) {
        let aliquotSum = (1..<number).filter { number % $0 == 0 }.reduce(0, +)
        switch aliquotSum {
        case _ where aliquotSum < number:
            self.classification = .deficient
        case _ where aliquotSum > number:
            self.classification = .abundant
        default:
            self.classification = .perfect
        }
    }
}
