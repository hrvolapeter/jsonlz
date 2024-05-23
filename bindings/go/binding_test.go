package tree_sitter_jsonlz_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-jsonlz"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_jsonlz.Language())
	if language == nil {
		t.Errorf("Error loading Jsonlz grammar")
	}
}
