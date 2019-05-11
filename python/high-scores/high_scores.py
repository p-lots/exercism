class HighScores(object):
    def __init__(self, scores):
        self.scores = scores
        self.scores_sorted = sorted(scores, reverse=True)

    def latest(self):
    	return self.scores[-1]

    def personal_best(self):
    	return self.scores_sorted[0]

    def personal_top_three(self):
    	return self.scores_sorted[0:3]
