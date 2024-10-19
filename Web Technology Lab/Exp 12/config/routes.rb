Rails.application.routes.draw do
  get 'welcome/index'
  # Optionally set this as the root route:
  root 'welcome#index'
end
