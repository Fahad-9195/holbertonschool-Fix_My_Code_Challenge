#!/usr/bin/ruby
puts ARGV.select { |x| x =~ /^-?[0-9]+$/ }.map(&:to_i).sort.join("\n")
