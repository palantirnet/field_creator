; Drush make file

; @todo, I'm not sure what the differences are between api versions.
api = 2


; Setting up a test environment with Drupal 7
core = 7.x

; Download the latest dev version of core.
projects[drupal][type] = "core"
projects[drupal][download][type] = "file"
projects[drupal][download][url] = "http://ftp.drupal.org/files/projects/drupal-7.x-dev.tar.gz"

; See the rush.ini file for why this section is commented out.
; @todo, add corresponding github issue.
; Download field_creator over git
; projects[field_creator][type] = module
; projects[field_creator][download][type] = git
; projects[field_creator][download][branch] = master
; projects[field_creator][download][url] = git@github.com:palantirnet/field_creator.git
