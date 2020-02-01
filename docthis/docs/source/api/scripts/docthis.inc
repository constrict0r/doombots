**docthis-sh**
-----------------------------------------------------------------------------

Generate Sphinx documentation.

Globals
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

   **PROJECT_PATH**

      Path to the project used as the source to generate documentation,
      if not specified the current path will be used.

Functions
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

   **escape()**

      Escape especial characters.

      The escaped characters are:

       - Period.
       - Slash.
       - Double dot.

      :Parameters:
         **$1** (*str*) – Text to escape.

      :Returns:
         The escaped input.

      :Return type:
        str

   **generate()**

      Setup sphinx and generate html and rst documentation.

      :Parameters:
         **$1** (*str*) – Optional project path. Default current directory.
         **$2** (*str*) – Optional CI service to use for generating a coverage badge.

      :Returns:
         0 if successful, 1 on failure, generates *README-single* rst
         on project's root directory.

      :Return type:
        int

   **generate_rst()**

      Shows help message.

      :Parameters:
         **$1** (*str*) – Optional project path. Default current directory.
         **$2** (*str*) – Optional CI service to use for generating a coverage badge.

      :Returns:
         0 if successful, 1 on failure.

      :Return type:
        int

   **get_author()**

      Get the author's name.

      :Parameters:
         **$1** (*str*) – Optional project path. Default current directory.

      :Returns:
         0 if successful, 1 on failure, echo author's name.

      :Return type:
        str

   **get_gitlab_ci_url()**

      Get the continuous integration repository URL for Gitlab.

      :Parameters:
         **$1** (*str*) – Optional project path. Default current directory.

      :Returns:
         0 if successful, 1 on failure, echo Gitlab CI URL.

      :Return type:
        str

   **get_gh_cover_url()**

      Get the coverage badge URL for Github (coveralls).

      :Parameters:
         **$1** (*str*) – Optional project path. Default current directory.

      :Returns:
         0 if successful, 1 on failure, echo Github coverage (coveralls) URL.

      :Return type:
        str

   **get_gl_cover_url()**

      Get the coverage badge URL for Gitlab.

      :Parameters:
         **$1** (*str*) – Optional project path. Default current directory.

      :Returns:
         0 if successful, 1 on failure, echo Gitlab.

      :Return type:
        str

   **get_img_url()**

      Get the images repository URL.

      :Parameters:
         **$1** (*str*) – Optional project path. Default current directory.

      :Returns:
         0 if successful, 1 on failure, echo images repository URL.

      :Return type:
        str
        
   **get_parameters()**

      Get bash parameters.

      Accepts:

       - *h* (help).
       - *p* <path> (project_path).

      :Parameters:
         **$@** (*str*) – Bash arguments.

      :Returns:
         0 if successful, 1 on failure. Set globals **$PROJECT_PATH**.

      :Return type:
        int

  **get_project()**

      Get project name.

      :Parameters:
         **$1** (*str*) – Optional project path. Default current directory.

      :Returns:
         0 if successful, 1 on failure, echo project name.

      :Return type:
        int

   **get_travis_ci_url()**

      Get the continuous integration repository URL for Travis.

      :Parameters:
         **$1** (*str*) – Optional project path. Default current directory.

      :Returns:
         0 if successful, 1 on failure, echo Travis CI URL.

      :Return type:
        str

   **get_variable()**

      Get a variable from the configuration file.

      :Parameters:
         **$1** (*str*) – Required variable name. 
         **$2** (*str*) – Optional project path. Default current directory.

      :Returns:
         0 if successful, 1 on failure, echo variable value.

      :Return type:
        str

   **get_variable_from_conf()**

      Get a raw variable from the configuration file.

      :Parameters:
         **$1** (*str*) – Required variable name. 
         **$2** (*str*) – Optional project path. Default current directory.

      :Returns:
         0 if successful, 1 on failure, echo variable value.

      :Return type:
        str

   **get_variable_from_conf()**

      Get a raw variable from the configuration file.

      :Parameters:
         **$1** (*str*) – Required variable name. 
         **$2** (*str*) – Optional project path. Default current directory.

      :Returns:
         0 if successful, 1 on failure, echo variable value.

      :Return type:
        str

   **get_variable_line()**

      Get a matching line from the configuration file.

      :Parameters:
         **$1** (*str*) – Required variable name. 
         **$2** (*str*) – Optional project path. Default current directory.

      :Returns:
         0 if successful, 1 on failure, echo variable value.

      :Return type:
        str

   **help()**

      Shows help message.

      :Parameters:
         Function has no arguments.

      :Returns:
         0 if successful, 1 on failure.

      :Return type:
        int

   **main()**

     Generate documentation using sphinx.

     Generates *README-single* rst on project's root directory.

      :Parameters:
         **$@** (*str*) – Bash arguments string.

      :Returns:
         0 if successful, 1 on failure.

      :Return type:
        int

   **readthedocs_to_rst()**

     Replace reference from readthedocs format to standard rst.

     This function assumes:

       - The author is the current user running the script.
       - A travis-ci enviroment exists for the current component.
       - An images repository exists the current user/project.

     See `this example <https://github.com/constrict0r/images>`_.

     :Parameters:
       **$1** (*str*) – Path to file where to apply replacements.

       **$2** (*str*) – Optional component name to use in replacements.

     :Returns:
       0 if successful, 1 on failure, modifies passed file.

     :Return type:
       int

   **replace_tokens()**

     Given an input string, replaces the tokens:

       - author
       - project
       - _url
       - _link
       - _badge

     :Parameters:
        **$1** (*str*) – Input text where to apply the substitutions.

     :Returns:
       0 if successful, 1 on failure, echo the resulting string.

     :Return type:
       str

   **sanitize()**

     Sanitize input.

     The applied operations are:

      - Remove unnecesary slashes.
      - Trim.

     :Parameters:
        **$1** (*str*) – Text to sanitize.

     :Returns:
        The sanitized input.

     :Return type:
        str
