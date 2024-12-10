(comment) @comment @spell

(block_start) @tag.delimiter

(block_end) @tag.delimiter

(interpolation
  path: [
    (path_expression
      (identifier) @variable)
    (identifier) @variable]) @tag.delimiter

(block_start
  path: [
    (path_expression
      (identifier) @variable)
    (identifier) @variable])

(block_end
  path: [
    (path_expression
      (identifier) @variable)
    (identifier) @variable])

