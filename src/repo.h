// Structure containing the working tree
struct work_tree {};

// Structure containing the repo config
struct conf {};

// Struct containing the git repository
struct git_repository {
  // TODO
  struct work_tree tree;
  struct conf conf;
  char git_dir[];
};
