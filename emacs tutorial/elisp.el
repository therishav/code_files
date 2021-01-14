;; tictactoe.el -- play tic tac toe in emacs
(defun tictactoe ()
  "Start plaing tic-tac-toe"
  (interactive);;lets you call the function using M-x
  (switch-to-buffer "tictactoe")
  (tictactoe-init))

(defun tictactoe-init()
  "start the new game of tic-tac-toe."
  (setq *tictactoe-board* (make-vector (*))

(defvar *tictactoe-board* nil
  "The board itself.")

(defvar *tictactoe-size* 3
  "The size of the board --  both height and width."
